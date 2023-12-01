troco = 0

while (troco <=0):
    try:
        troco = float(input("Change owed: "))
    except ValueError:
        print("invalid")


troco = troco * 100

count25 = 0
count10 = 0
count5 = 0
count1 = 0

count25 = troco//25
troco = troco % 25

count10 = troco//10
troco = troco % 10

count5 = troco//5
troco = troco % 5

count1 = troco

soma = count25+count10+count5+count1
print(soma)
