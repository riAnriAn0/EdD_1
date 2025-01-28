def is_palindrome(string):
    str_inv = string[::-1]
    if str_inv == string:
        return True
    else: 
        return False
    
string = input("Digite um palavra: ")

if is_palindrome(string):
    print(f"A palavra {string} é um palindromo")
else: 
    print(f"A palavra {string} não é um palindromo")