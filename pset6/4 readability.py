text = input("text: ")  # input prompt


def count_s(t):  # total number of sentences
    n = 0
    for i in t:
        if (i == '!' or i == '.' or i == '?'):
            n += 1
    return n


def count_w(t):  # total number of words
    return len(t.split())


def count_l(t):  # total number of letters
    n = 0
    for i in t:
        if i.isalpha():
            n += 1
    return n


sentences = count_s(text)
letters = count_l(text)
words = count_w(text)

L = (letters * 100) / words  # average number of letters per 100 words
S = (sentences * 100) / words  # average number of sentences per 100 words

index = 0.0588 * L - 0.296 * S - 15.8  # Coleman-Liau index
grade = round(index)

if grade > 1 and grade < 16:
    print(f"Grade {grade}")
elif grade < 1:
    print("Before Grade 1")
elif grade > 16:
    print("Grade 16+")

