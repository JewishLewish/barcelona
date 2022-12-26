#Barcelona CMD Prompt
#
#
# Start Commands 
# _______________________
# barcelona, bar, b
#
#
#
# Options
# _______________________
# r / run -> Opens a barcelona coded file (or ending in .bar)
# t / translate <python/rust> -> Translates the barcelona file to a python or rust file 

import std/[strutils]
import main
import translate/bar2py

while true:
    write(stdout, "-> ")
    let input = readLine(stdin).toLower.split(" ")


    if input[0] in ["b", "bar", "barcelona"]:
        if input[1] == "r" or input[1] == "run":
            echo " "
            main(input[2])
            echo " "
            #break
        elif input[1] == "t" or input[1] == "translate":
            if input[2] == "python":
                pytrans(input[3])
    else:
        echo "Error."