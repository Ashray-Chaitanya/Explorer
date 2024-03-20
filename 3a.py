def analyze(sentence):
    digit_count = 0
    uppercase_count = 0
    lowercase_count = 0

    for i in sentence:
        if i.isdigit():
            digit_count += 1
        elif i.isupper():
            uppercase_count += 1
        elif i.islower():
            lowercase_count += 1
    return digit_count, uppercase_count, lowercase_count

user_sentence = input("Enter a sentence: ")
digit_count, uppercase_count, lowercase_count = analyze(user_sentence)
print("Number of words:", len(user_sentence.split()))
print("Number of digits:", digit_count)
print("Number of uppercase letters:", uppercase_count)
print("Number of lowercase letters:", lowercase_count)