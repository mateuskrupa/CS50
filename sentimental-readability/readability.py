def count_letters(text):
    special_characters = ".,!?:;'-\""
    count = sum(1 for char in text if char.isalpha() and char not in special_characters)
    return count

def count_words(text):
    return len(text.split())

def count_sentences(text):
    sentence_endings = ".!?"
    count = sum(1 for char in text if char in sentence_endings)
    return count

def main():
    text = input("Text: ")
    letras = count_letters(text)
    palavras = count_words(text)
    frases = count_sentences(text)

    conta1 = (letras / palavras) * 100
    conta2 = (frases / palavras) * 100

    index = ((0.0588 * conta1) - (0.296 * conta2)) - 15.8
    indexc = round(index)

    if indexc < 1:
        print("Before Grade 1")
    elif indexc > 15:
        print("Grade 16+")
    else:
        print(f"Grade {indexc}")

if __name__ == "__main__":
    main()
