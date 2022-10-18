a=[[[' ','ROWS:--','[1]','[2]','[3]','[4]','[5]','[6]'],
   [' ',' ',' A',' B',' C',' D',' E',' F'],
   [' ',' ',' G',' H',' I',' J',' K',' L'],
   [' ',' ',' M',' N',' O',' P',' Q',' R'],
   [' ',' ',' S',' T',' U',' V',' W',' X'],
   [' ',' ',' Y',' Z','  ','  ','  ','  ']]]
print("Entert 100 to end the loop.\nSpaces can be give by the row with less elements.")
for i in range(len(a)):
    for j in range(len(a[i])):
        for k in range(len(a[i][j])):
            print(a[i][j][k],end="\t")
        print()
    print()
print("\n")

list1=[]
a=''
i=0
while i!=1:
    n=(input("Enter any row : "))
    m=str(n)   

    if n=='1':
        l1=['A','G','M','S','Y']
        list1.append(l1)
        a=a+'1'
    elif n=='2':
        l2=['B','H','N','T','Z']
        list1.append(l2)
        a+='2'
    elif n=='3':
        l3=['C','I','O','U',' ']
        list1.append(l3)
        a+='3'
    elif n=='4':
        l4=['D','J','P','V',' ']
        list1.append(l4)
        a+='4'
    elif n=='5':
        l5=['E','K','Q','W',' ']
        list1.append(l5)
        a+='5'
    elif n=='6':
        l6=['F','L','R','X',' ']
        list1.append(l6)
        a+='6'
    elif n=='100':
        i=i+1
    else:
        print('This will not be included in finding the words')

print("\n \n \n")

f=[]
g=[[' ','ROWS:--','[1]','[2]','[3]','[4]','[5]']]
s1=[' ',' ',' A',' G',' M',' S',' Y']
s2=[' ',' ',' B',' H',' N',' T',' Z']
s3=[' ',' ',' C',' I',' O',' U',' ']
s4=[' ',' ',' D',' J',' P',' V',' ']
s5=[' ',' ',' E',' K',' Q',' W',' ']
s6=[' ',' ',' F',' L',' R',' X',' ']

if '1' in a:
    g.append(s1)
if '2' in a:
    g.append(s2)
if '3' in a:
    g.append(s3)
if '4' in a:
    g.append(s4)
if '5' in a:
    g.append(s5)
if '6' in a:
    g.append(s6)

f.append(g)

for i in range(len(f)):
    for j in range(len(f[i])):
        for k in range(len(f[i][j])):
            print(f[i][j][k],end="\t")
        print()
    print()
print("\n")

O=[]
nn=0
while nn<(len(a)):
    n=(input("Enter any row : "))
    
    if n=='1':
        l1=['A','B','C','D','E','F']
        O.append(l1)
    
    elif n=='2':
        l2=['G','H','I','J','K','L']
        O.append(l2)
        
    elif n=='3':
        l3=['M','N','O','P','Q','R']
        O.append(l3)
        
    elif n=='4':
        l4=['S','T','U','V','W','X']
        O.append(l4)
        
    elif n=='5':
        l5=['Y','Z',' ',' ',' ',' ']
        O.append(l5)
    else:
        print('This will not be included in finding the words')
        continue

    nn=nn+1

c=' '
l=[]
for i in range(len(list1)):
    a=list(set(list1[i]).intersection(O[i]))
    l.append(a)
    if len(a)==0:
        continue
    else:
        c=c+a[0]
        
if len(l)==0:
    print("NO WORD FOUND")
else:
    print("Word Is:--",c)