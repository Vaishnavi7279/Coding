#importing the os
import os
import datetime
#defining function 
#filedispenser is used to delete the files upto the given threshold
#for threshold use date time
def filedispenser(path,thresh,base=False):
    #checking if the directory exists
    if os.path.isdir(path):
        #traversing through the directory
        #finding internal amongst all directories and files 
        for internal in os.listdir(path):
            #checking the subfolders
            filedispenser(path + "/" + internal, thresh, False)
        #if base is not there and dir is empty then deletion
        if(not base) and (len(os.listdir(path))==0):
            os.rmdir(path)
        return
    #extract the date and time
    mod=os.path.getmtime(path)
