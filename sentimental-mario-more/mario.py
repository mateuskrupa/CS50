altura = 0
while(altura <1 or altura>8):
    try:
        altura = int(input("Digite a altura da escada: "))
    except ValueError:
        print("Not between 1 tp 8")


for i in range(0, altura):
    altura = altura -1
    i = i+1

    espaco = ' '*altura
    degrau = '#'*i

    frase = espaco + degrau + '  ' + degrau
    print(frase)
