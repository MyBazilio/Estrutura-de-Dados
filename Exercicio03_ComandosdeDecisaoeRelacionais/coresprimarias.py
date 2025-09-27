cor = input("Digite uma cor primária: ").lower()
 
if cor != "azul" and cor != "vermelho" and cor != "amarelo":
    print("Essa cor não faz parte das cores primárias!")
elif cor == "vermelho":
    print("VERMELHO: calor, energia, perigo")
elif cor == "azul":
    print("AZUL: calma, inteligência, frio")
elif cor == "amarelo":
    print("AMARELO: alegria, riqueza, luz")
 