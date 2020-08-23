def text_to_speech(msg):
    import gtts
    import os
    a = gtts.gTTS(slow = False, text = msg, lang = 'en-IN')
    a.save('sample.mp3')
    os.system('mpg123 sample.mp3')
def speech_to_text():
    import speech_recognition as s_r
    r = s_r.Recognizer()
    with s_r.Microphone(sample_rate = 48000) as source:
        r.adjust_for_ambient_noise(source = source, duration = 1)
        a = r.listen(source)
        try:
            text = r.recognize_google(a)
            print("You said : " + text)
            return text
        except:
            text_to_speech("something went wrong! I couldn't hear it properly")
def send_attachment(from1, to, msg, server):
    import smtplib
    import email
    from email.message import EmailMessage
    text_to_speech('Enter path and filename that you want to attach')
    a = input()
    f = open(a, 'rb') 
    if '.txt' in a:
        msg.add_attachment(f.read(), 'application/txt', 'txt', filename = 'sample.txt')
    elif '.pdf' in a:
        msg.add_attachment(f.read(), 'application/pdf', 'pdf', filename = 'sample.pdf')
    server.sendmail(from1, to, msg.as_string())
def send_mail(i):
    import smtplib
    import email
    from email.message import EmailMessage
    server = smtplib.SMTP('SMTP.gmail.com', 587)
    text_to_speech('Enter your username')
    a = input()
    text_to_speech('Enter your password')
    b = input()
    server.starttls()
    try:
        server.login(user = a, password = b)
        msg = email.message.EmailMessage()
        msg['To'] = i
        text_to_speech('Speak the subject of email')
        str1 = speech_to_text()
        msg['Subject'] = str1
        text_to_speech('Speak the message that you want to send')
        message = speech_to_text()
        msg.set_content(message)
        text_to_speech('Do you want to attach any file?')
        str1 = speech_to_text()
        if str1 == 'yes':
            send_attachment(a, i, msg, server)
        else :
            server.sendmail(from_addr = a, to_addrs = i, msg = msg.as_string())
        server.quit()
    except(smtplib.SMTPAuthenticationError):
        text_to_speech('Sorry login username or password was invalid')
if __name__ == '__main__':
    d = {'prathamesh' : 'muprathamesh@gmail.com', 'varun' : 'narkarva123@gmail.com', 'abrar' : 'abrarahmedmomin808@gmail.com', 'shreya' : 'shreya.naravane@gmail.com', 'ruchi' : 'ruchi.nitsure@gmail.com', 'amisha' : 'amishamala26@gmail.com', 'priya' : 'priya.pitre@gmail.com', 'gunjan' : 'bawankulegunjan@gmail.com'}
    text_to_speech('Hello Varun, what can I do for you?')
    str1 = speech_to_text()
    while 1:
        text_to_speech('Speak name of recipient')
        str1 = speech_to_text()
        for i in d.keys():
            if str1 != None:
                if str1.lower() == i:
                    flag = 1
                    break
                else:
                    flag = 0
            else:
                flag = 2
                break
        if flag == 2:
            continue
        elif flag == 1:
            send_mail(d[i])
        else:
            text_to_speech('Sorry please enter entire mail-id of recipient')
            a = input()
            d[str1.lower()] = a
            send_mail(a)
        text_to_speech('Do you want to send more emails?')
        str1 = speech_to_text()
        if str1 == 'yes':
            continue
        else:
            break

