#!/usr/bin/python3
# Microsoft C++ runtime library documentation
import re
import requests
import lxml.etree as etree
from lxml import html

git_url = "https://github.com"
# Microsoft github C runtime libray documentation
crt_url = git_url + "/MicrosoftDocs/cpp-docs/blob/master/docs/c-runtime-library"

# floating point main page
# replace by appropriate docs
fps_item = "/floating-point-support.md"

def page_html(item):
	req = requests.get(crt_url + item)
	assert (req.status_code == 200)
	# if r.status == 200: ...
	parser = etree.HTMLParser(recover=True)

	return etree.HTML(req.content, parser)

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

def section_text(table):
	return [a.text for a in table]

def hrefs(item):
	page = page_html(item)
	#print(etree.tostring(page, pretty_print=True).decode('utf-8'))
	section = section_table(page)
	return [f'{git_url}{h}' for h in section_href(section)]

ref_url = crt_url + "/reference"
fun_url = ref_url + "/bessel-functions-j0-j1-jn-y0-y1-yn.md"
#fun_url = ref_url + "/ldexp.md"



# use .text to extract cdecl
syntax_xpath = "//*[@id='syntax']/following::pre[1]/code"
# sloppy parameter string
parameters_xpath = "//*[@id='parameters']/following::p[1]"
return_value_xpath = "//*[@id='return-value']/following::p[1]"

if __name__ == '__main__':
	href = hrefs(fps_item)
	for h in href:
		print (h)
