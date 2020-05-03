import keyboard

while True:
    try:
        if keyboard.is_pressed('q'):
            print('You Pressed A key!')
            break
    except:
        break
