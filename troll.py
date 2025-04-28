import pyautogui
import time

mensagem = "Message here!!!"
quantidade = 500
espera = 0.1

print("5 segundos para ir para o whats")
time.sleep(5)

for i in range(quantidade):
    pyautogui.typewrite(mensagem)
    pyautogui.press('enter')
    time.sleep(espera)

print("Mensagens enviadas!")
