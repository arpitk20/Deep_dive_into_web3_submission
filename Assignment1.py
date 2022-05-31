import hashlib
import time


arpit=input("Enter your string: ")
start_time=time.time()
i=0
j=0x00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
hashed_string=hashlib.sha256(arpit.encode('utf-8')).hexdigest()
while(1):
    arpit2=arpit+str(i)
    i+=1
    hashed_string2=hashlib.sha256(arpit2.encode('utf-8')).hexdigest()
    hashed_string2=int(hashed_string2,16)
    if(hashed_string2<j):
        print(i)
        break
end_time=time.time()
print("---%d---milliseconds"%(1000*(end_time-start_time)))


 