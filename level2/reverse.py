#!/usr/bin/python3

s = "delabere"
plain = "00"

index = 3
for i in range(1, len(s)):
	print(ord(s[i]))
	plain = plain + f'{ord(s[i]):0>3}'

print(plain)
