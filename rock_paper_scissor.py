from tkinter import *
from PIL import Image, ImageTk
from random import randint

window = Tk()
window.title("Rock Paper Scissor")
window.configure(background="black")

image_rock1 = ImageTk.PhotoImage(Image.open("Rock.png"))
image_paper1 = ImageTk.PhotoImage(Image.open("Paper.png"))
image_scissor1 = ImageTk.PhotoImage(Image.open("Scissor.png"))
image_rock2 = ImageTk.PhotoImage(Image.open("Rock.png"))
image_paper2 = ImageTk.PhotoImage(Image.open("Paper.png"))
image_scissor2 = ImageTk.PhotoImage(Image.open("Scissor.png"))
 
label_player = Label(window, image=image_scissor1)
label_computer = Label(window, image=image_scissor2)
label_player.grid(row=1, column=4)
label_computer.grid(row=1, column=0)

computer_score = Label(window, text=0, font=("arial",60,"bold"),fg="red")
player_score = Label(window, text=0, font=("arial",60,"bold"),fg="red")
computer_score.grid(row=1,column=1)
player_score.grid(row=1, column=3)

player_indicator = Label(window,font=("arial",40,"bold"),text="PLAYER",bg="orange",fg="blue")
computer_indicator = Label(window,font=("arial",40,"bold"),text="COMPUTER",bg="orange",fg="blue")
player_indicator.grid(row=0,column=3)
computer_indicator.grid(row=0,column=1)

def updateMessage(a):
    final_message['text'] = a

def computer_update():
    final = int(computer_score['text'])
    final +=1
    computer_score["text"] = str(final)

def player_update():
    final = int(player_score['text'])
    final += 1
    player_score["text"] = str(final)

def winner_check(p,c):
    if p==c:
        updateMessage("It's a tie")

    elif p=="rock":
        if c=="paper":
            updateMessage("Computer Wins")
            computer_update()
        else:
            updateMessage("Player Wins")
            player_update()

    elif p=="paper":
        if c=="scissor":
            updateMessage("Computer Wins")
            computer_update()
        else:
            updateMessage("Player Wins")
            player_update()

    elif p=="scissor":
        if c=="rock":
            updateMessage("Computer Wins")
            computer_update()
        else:
            updateMessage("Player Wins")
            player_update()
            
    else:
        pass

to_select = ["rock", "paper", "scissor"]

def choice_update(a):
    choice_computer=to_select[randint(0,2)]
    if choice_computer=="rock":
        label_computer.configure(image=image_rock2)
    elif choice_computer=="paper":
        label_computer.configure(image=image_paper2)
    else:
        label_computer.configure(image=image_scissor2)
    
    if a=="rock":
        label_player.configure(image=image_rock1)
    elif a=="paper":
        label_player.configure(image=image_paper1)
    else:
        label_player.configure(image=image_scissor1)
    
    winner_check(a, choice_computer)

final_message = Label(window,font=("arial",20,"bold"),bg="red",fg="white")
final_message.grid(row=3,column=2)

button_rock = Button(window,width=16,height=3,text="ROCK",font=("arial",20,"bold"),bg="yellow",fg="red", command=lambda:choice_update("rock")).grid(row=2,column=1)
button_paper = Button(window,width=16,height=3,text="PAPER",font=("arial",20,"bold"),bg="yellow",fg="red", command=lambda:choice_update("paper")).grid(row=2,column=2)
button_scissor = Button(window,width=16,height=3,text="SCISSOR",font=("arial",20,"bold"),bg="yellow",fg="red", command=lambda:choice_update("scissor")).grid(row=2,column=3)


window.mainloop()
