#making a QRcode using module qrcode,class(QRCode) and functions of the class
import qrcode 
#implementing functions using object(q) of the class(QRCode)
q=qrcode.QRCode(version=1,box_size=4
                ,border=1) 
n=input("Enter data for qr: ")
q.make(fit=True)
q.add_data(n)
img=q.make_image()
f=input("Enter file name to save: ")
d="E:\\python\\qrcode\\"+f+".png" #file location to save newly generated QR
img.save(d)
print("Saved successfully!")

