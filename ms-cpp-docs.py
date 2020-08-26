#!/usr/bin/python3
# Microsoft C++ runtime library documentation
import re
import requests
import lxml.etree as etree
from xml.etree import ElementTree
from lxml import html
from lxml.html.clean import clean_html
from lxml.html.clean import Cleaner
# cleaner = Cleaner(page_structure=False)                                          
# cleaner.clean_html(...)

git_url = "https://github.com"
# Microsoft github C runtime libray documentation
crt_url = git_url + "/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library"

# floating point main page
# set by hand appropriately
fps_item = "/floating-point-support.md"

# parsed HTML from URL
# E.g., page_html("/floating-point-support.md")
def page_html(item):
	req = requests.get(crt_url + item)
	assert (req.status_code == 200)
	# if r.status == 200: ...
	parser = etree.HTMLParser(recover=True)

	return etree.HTML(req.content, parser)

#
# List of all functions
#
# user content
section_xpath = '//*[starts-with(@id, "user-content-")]'
# first column of table after matching id
td_xpath = section_xpath + "/following::table/tbody/tr/td[1]"
a_xpath = td_xpath + "/a"

# <a href="url">text</a>
def section_table(page):
	return page.xpath(a_xpath)

# URLs of individual functions without git_url prefix
def section_href(table):
	return [a.attrib['href'] for a in table]

def test_section_href():
	page = page_html(fps_item)
	table = section_table(page)
	href = section_href(table)
	for i in href:
		print(i)

def section_text(table):
	return [a.text for a in table]


# array of urls to floating point functions
# e.g., hrefs("/floating-point-support.md")
def hrefs(item):
	page = page_html(item)
	section = section_table(page)

	return [f'{git_url}{h}' for h in section_href(section)]

#
# Individual functions
#
#fun_item = "/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md"
fun_item = "/reference/ldexp.md"

# user content
user_content_xpath = '//*[starts-with(@id, "user-content-")]/parent::h2'

def section_function_help(page):
	xhelp = "//h1/following-sibling::p[1]"
	return page.xpath(xhelp)[0].text

def test_section_function_help():
	page = page_html(fun_item)
	ret = section_function_help(page)
	print(ret)

# array of all function declarations
def section_syntax(page):
	syntax_xpath = '//*[@href="#syntax"]/parent::h2/following::div[1]'
	syntax = page.xpath(syntax_xpath)
	text = re.sub(r'\n\s+', '', ''.join(syntax[0].itertext()))
	text = re.sub(r'\n\)', ')', text);
	text = re.sub(r'//.*\n', '', text, re.DOTALL)

	return text.split(';\n')

def test_section_syntax():
	page = page_html(fun_item)
	ret = section_syntax(page)
	print(ret)

def section_parameters(page):
	parameters_xpath = '//*[@href="#parameters"]/parent::h3/following::p[./em and ./br]'
	params = page.xpath(parameters_xpath)

	return {k:v.strip() for (k,v) in [list(i.itertext()) for i in params]}

def test_section_parameters():
	page = page_html(fun_item)
	ret = section_parameters(page)
	print(ret)

if __name__ == '__main__':
	# all reference to individual functions
	#test_section_href()

	#test_section_function_help()
	#test_section_syntax()
	test_section_parameters()

	#page = page_html(fun_item)
	#print(etree.tostring(page, pretty_print=True).decode('utf-8'))
	#print (page)
	#x = section_parameters(page)
	#for i in x:
		#tostring(i)
		#print(etree.tostring(i, pretty_print=True).decode('utf-8'))
		#print(i)
