#smtplib library for sending mails- library required to send emails to users
import smtplib   #importing the library
#Simple Mail Transfer Protocol (SMTP)
#server which has smtp port number and address
#checking it for a gmail account ; required to check the settings for gmail
# smtp.gmail.com - smtp server address ; 465 - port number
server=smtplib.SMTP_SSL("smtp.gmail.com",465)  
#server login required to authenticate the user
#server.login(email,password)
server.login("500085046@stu.upes.ac.in","pxLRyQAg@1")
#subject line can also be inserted
#server.sendmail("from","to","message")
server.sendmail("500085046@stu.upes.ac.in","")
#command to quit the session between the client and the smtp server 
server.quit() 

#mail automation theory: https://automatetheboringstuff.com/chapter16/
#stackoverflow mail theory: https://stackoverflow.com/questions/8856117/how-to-send-email-to-multiple-recipients-using-python-smtplib

#mail for multiple reciepents 
from email.MIMEMultipart import MIMEMultipart
from email.MIMEText import MIMEText
import smtplib

msg = MIMEMultipart()
msg["Subject"] = "Example"
msg["From"] = "me@example.com"
msg["To"] = "malcom@example.com,reynolds@example.com,firefly@example.com"
msg["Cc"] = "serenity@example.com,inara@example.com"
body = MIMEText("example email body")
msg.attach(body)
smtp = smtplib.SMTP("mailhost.example.com", 25)
smtp.sendmail(msg["From"], msg["To"].split(",") + msg["Cc"].split(","), msg.as_string())
smtp.quit()

