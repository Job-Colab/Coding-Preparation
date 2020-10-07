s = input("Enter the time : ")
time = s.split(":")
hh = int(time[0])        
mm = time[1]

if "pm" in time[1] :
    mm = mm.replace("pm", "")
    if hh != 12 :
        hh = int(time[0]) + 12
    print("24hr format "+str(hh)+":"+mm)
else :
    mm = mm.replace("am","")
    if hh < 10 :
        print("24hr format "+"0"+str(hh)+":"+mm)
    else :
        if hh == 12 :
            print("24hr format 00:"+mm)
        else :
            print("24hr format "+"0"+str(hh)+":"+mm)
    

        

    
        
        
     


