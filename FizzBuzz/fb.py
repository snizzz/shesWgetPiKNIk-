import pyttsx3

syntezator = pyttsx3.init()
n = 100
for x in range(1,n):
    if x % 15 == 0:
        syntezator.say("FizzBuzz")
        syntezator.runAndWait()
        syntezator.stop()
        print ('FizzBuzz')
    elif x % 3 == 0:
        syntezator.say("Fizz")
        syntezator.runAndWait()
        syntezator.stop()
        print ('Fizz')
    elif x % 5 == 0:
        syntezator.say("Buzz")
        syntezator.runAndWait()
        syntezator.stop()
        print ('Buzz')
    else:
        syntezator.say(str(x))
        syntezator.runAndWait()
        syntezator.stop()
        print (x)
