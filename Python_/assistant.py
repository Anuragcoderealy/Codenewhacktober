# Importing all the libraries required

import datetime
import os
import time
import ecapture
import webbrowser
import subprocess
import json
import requests
import wikipedia
import speech_recognition as sr
import pyttsx3
import wolframalpha

# Setting up Voice Engine

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', 'voices[1].id')


# Defining function speak to convert text to speech

def speak(text):
    engine.say(text)
    engine.runAndWait()


# Defining a function wishMe which greets the user

def wishMe():
    hour = datetime.datetime.now().hour
    if 0 < hour < 12:
        speak("Hello, Good Morning")
        print("Hello, Good Morning")
    elif 12 < hour < 18:
        speak("Hello, Good Afternoon")
        print("Hello, Good Afternoon")
    else:
        speak("Hello, Good Evening")
        print("Hello, Good Evening")


# Defining a function takeCommand to understand the command given by the user

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening....")
        audio = r.listen(source)
        print(audio)
        statement = r.recognize_google(audio, language="en-in")
        print(f"user said: {statement}\n")

        # except Exception as e:
        #     speak("Pardon me, please try again")
        #     return "None"
        return statement


print("Loading your AI personal assistant Lexer")
speak("Loading your AI personal assistant Lexer")
wishMe()

# Defining Main function
# Commands given by user will store here

if __name__ == "__main__":

    while True:
        speak("Tell me how can I help you?")
        statement = takeCommand().lower()
        if statement == 0:
            continue
        if "good bye" in statement or "ok bye" in statement or "stop" in statement:
            speak("Your personal assistant Lexer is shutting down, Good bye")
            print("Your personal assistant Lexer is shutting down, Good bye")

        if 'wikipedia' in statement:
            speak("searching wikipedia")
            statement = statement.replace("wikipedia", "")
            results = wikipedia.summary(statement, sentences=3)
            speak("According to wikipedia")
            print(results)
            speak(results)

        elif 'open youtube' in statement:
            webbrowser.open_new_tab("https://www.youtube.com")
            speak("youtube is open now")
            time.sleep(5)

        elif 'open google' in statement:
            webbrowser.open_new_tab("https://www.google.com")
            speak("Google is open now")
            time.sleep(5)

        elif 'open gmail' in statement:
            webbrowser.open_new_tab("gmail.com")
            speak("Google mail is open now")
            time.sleep(5)

        elif 'time' in statement:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f" the time is {strTime}")

        elif 'news' in statement:
            news = webbrowser.open_new_tab("https://timesofindia,indiatime.com/home/headlines")
            speak('Here are some headlines from the Times of India, Happy reading')
            time.sleep(5)

        elif 'camera' in statement or "take a photo" in statement:
            ecapture.capture(0, "robo camera", "img.jpg")

        elif 'search' in statement:
            statement = statement.replace("search", "")
            webbrowser.open_new_tab(statement)
            time.sleep(5)

        elif "log off" in statement or "sign out" in statement:
            speak("Ok, your pc will log off in 10 sec make sure you exit from all applications")
            subprocess.call(["shutdown", "/1"])

time.sleep(3)