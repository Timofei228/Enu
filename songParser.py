import requests
#from lxml import etree
import lxml.html
import csv
def parse(url):
    try:
        api = requests.get(url)
    except:
        return
    tree = lxml.html.document_fromstring(api.text)
    text_original = tree.xpath('//*[@id="click_area"]/div//*[@class="original"]/text()')
    text_translate = tree.xpath('//*[@id="click_area"]/div//*[@class="translate"]/text()')
    name = get_name(url)
    #with open("%s.csv" % name, "w", newline="") as csv_file:
        #write = csv.writer(csv.file)
    with open("%s.txt" %name, "w", newline='') as txt_file:
        for i in range(len(text_original)):
            txt_file.write(text_original[i])
            txt_file.write(text_translate[i])
            print(text_original[i])
            print(text_translate[i])
def get_name(url):
    return url.split("/")[-1].split(".")[0]

def main():
    parse("https://www.amalgama-lab.com/songs/b/beyonce/baby_boy.html")
if __name__ == "__main__":
    main()