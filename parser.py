import requests as rq
from bs4 import BeautifulSoup as bs
url_post = 'https://edu.enu.kz/loginsecure'
login = '991007350765'
password = 'qwerty5146209!@'
def Auth(login, password):
    s = rq.session()
    s.get('https://edu.enu.kz/index')
    data = {
            'secfield': 0,
            'language': 1,
            'iin': login,
            'password':password,
        }
    r = s.post(url_post,data=data)
    gr_url = s.get('https://edu.enu.kz/templates/JSF/schedule/studentScheduleViewer.xhtml?')
    #gr_url = session.get('https://edu.enu.kz/current_progress_gradebook_student?studentID=57982&year=2019&term=1').text
    soup = bs(gr_url.content,'html.parser')
    days = soup.find_all('div',attrs={'class':'main-box clearfix'})
    #days = soup.find_all('div', attrs={'class': 'table-responsive'})
    for day in days:
        #dd = day.find_all('td',attrs={'style':'width: 20%'})
        dd = day.find_all('td')
        days = day.find('h2',attrs={'class':'pull-left'})
        print(days.text)
        for d in dd:
            print(d.text)
        #print(dd)
Auth(login,password)