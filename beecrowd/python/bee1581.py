numeroCasos = int(input())
for _ in range(numeroCasos):
    numeroPessoas = int(input())
    idiomas = set()
    for _ in range(numeroPessoas):
        idioma = input()
        idiomas.add(idioma)

    if len(idiomas) > 1:
        print("Ingles")
    else:
        print(idiomas.pop())


