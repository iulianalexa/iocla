def say(something='Something default'):
    print(something)

def subsir(str1, str2):
	if str2 in str1:
		i = 0
		while not str1[i:].startswith(str2):
			i = i + 1
		return i
	
	return -1

# TODO
# Definiți o nouă funcție care întoarce poziția primei
# apariții a celui de-al doilea șir în cadrul primului,
# dacă al doilea șir este un subșir al primului șir
# și -1 în caz contrar.

