import math

def perimetri():
    print("--- Calcolatore di Perimetri ---")
    print("Scegli la figura: 1-Quadrato, 2-Cerchio, 3-Rettangolo")
    scelta = input("Inserisci il numero (1/2/3): ")

    if scelta == '1':
        lato = float(input("Inserisci il lato del quadrato: "))
        perimetro = 4 * lato
        print(f"Il perimetro del quadrato è: {perimetro}")

    elif scelta == '2':
        raggio = float(input("Inserisci il raggio del cerchio: "))
        perimetro = 2 * math.pi * raggio
        print(f"La circonferenza (perimetro) è: {perimetro:.2f}")

    elif scelta == '3':
        base = float(input("Inserisci la base del rettangolo: "))
        altezza = float(input("Inserisci l'altezza del rettangolo: "))
        perimetro = 2 * (base + altezza)
        print(f"Il perimetro del rettangolo è: {perimetro}")

    else:
        print("Scelta non valida.")

if __name__ == "__main__":
    perimetri()
