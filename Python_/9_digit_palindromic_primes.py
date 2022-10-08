
def prime(n):
	for i in range(3,int(n**0.5)+1,2):
		if(n%i==0):return 0
	else:return 1
def main():
	file=open("9_digit_palindromic_primes.txt","w")
	for i in range(100000001,999999999,2):
		if str(i)==str(i)[::-1]:
			if(prime(i)):
				file.write(f"{str(i)}\n")
	file.close()
if __name__=="__main__":
	main()
