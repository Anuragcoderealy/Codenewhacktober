s=int(input("Enter grid size: "))
limit=2*pow(s,2)

red=1
blue=5

total=0
flag=0

grid=[]

for x in range(s):
  a=[]
  for y in range(s):
    a.append(0)
  grid.append(a)

rinR=a.copy()
rinC=a.copy()
binR=a.copy()
binC=a.copy()
tinR=a.copy()
tinC=a.copy()

print("For Red")
red_rows=list(map(int, input("Enter for rows: \n").split()))
red_cols=list(map(int, input("Enter for columns: \n").split()))

print("For Blue:")
blue_rows=list(map(int, input("Enter for rows: \n").split()))
blue_cols=list(map(int, input("Enter for columns: \n").split()))

red_len=len(red_rows)
blue_len=len(blue_rows)

# Adding the tiles to grid
for i in range(red_len):
  grid[red_rows[i]-1][red_cols[i]-1]=red
  rinR[red_rows[i]-1]+=1
  rinC[red_cols[i]-1]+=1
  tinR[red_rows[i]-1]+=1
  tinC[red_cols[i]-1]+=1
  total+=2
for i in range(blue_len):
  grid[blue_rows[i]-1][blue_cols[i]-1]=blue
  binR[blue_rows[i]-1]+=1
  binC[blue_cols[i]-1]+=1
  tinR[blue_rows[i]-1]+=1
  tinC[blue_cols[i]-1]+=1
  total+=2

# print("\n")
# for i in range(s):
#   print(grid[i])
# print("\n")

while total!=limit:
  for x in range(s):
    for y in range(s):
      if grid[x][y]!=0:
        if grid[x][y]==red:
          if y<s-1:
            if grid[x][y+1]==red:
              if y==s-2:
                if grid[x][y-1]==0:
                  grid[x][y-1]=blue
                  binR[x]+=1
                  binC[y-1]+=1
                  tinR[x]+=1
                  tinC[y-1]+=1
                  total+=2
              elif y==0:
                if grid[x][y+2]==0:
                  grid[x][y+2]=blue
                  binR[x]+=1
                  binC[y+2]+=1
                  tinR[x]+=1
                  tinC[y+2]+=1
                  total+=2
              else:
                if grid[x][y-1]==0:
                  grid[x][y-1]=blue
                  binR[x]+=1
                  binC[y-1]+=1
                  tinR[x]+=1
                  tinC[y-1]+=1
                  total+=2
                if grid[x][y+2]==0:
                  grid[x][y+2]=blue
                  binR[x]+=1
                  binC[y+2]+=1
                  tinR[x]+=1
                  tinC[y+2]+=1
                  total+=2
      
          if x<s-1:
            if grid[x+1][y]==red:
              if x==s-2:
                if grid[x-1][y]==0:
                  grid[x-1][y]=blue
                  binR[x-1]+=1
                  binC[y]+=1
                  tinR[x-1]+=1
                  tinC[y]+=1
                  total+=2
              elif x==0:
                if grid[x+2][y]==0:
                  grid[x+2][y]=blue
                  binR[x+2]+=1
                  binC[y]+=1
                  tinR[x+2]+=1
                  tinC[y]+=1
                  total+=2
              else:
                if grid[x-1][y]==0:
                  grid[x-1][y]=blue
                  binR[x-1]+=1
                  binC[y]+=1
                  tinR[x-1]+=1
                  tinC[y]+=1
                  total+=2
                if grid[x+2][y]==0:
                  grid[x+2][y]=blue
                  binR[x+2]+=1
                  binC[y]+=1
                  tinR[x+2]+=1
                  tinC[y]+=1
                  total+=2

          if y<s-2:
            if grid[x][y+2]==red:   
              if grid[x][y+1]==0:
                grid[x][y+1]=blue
                binR[x]+=1
                binC[y+1]+=1
                tinR[x]+=1
                tinC[y+1]+=1
                total+=2

          if x<s-2:
            if grid[x+2][y]==red:   
              if grid[x+1][y]==0:
                grid[x+1][y]=blue
                binR[x+1]+=1
                binC[y]+=1
                tinR[x+1]+=1
                tinC[y]+=1
                total+=2
       
        elif grid[x][y]==blue: 
          if y<s-1:
            if grid[x][y+1]==blue:
              if y==s-2:
                if grid[x][y-1]==0:
                  grid[x][y-1]=red
                  rinR[x]+=1
                  rinC[y-1]+=1
                  tinR[x]+=1
                  tinC[y-1]+=1
                  total+=2
              elif y==0:
                if grid[x][y+2]==0:
                  grid[x][y+2]=red
                  rinR[x]+=1
                  rinC[y+2]+=1
                  tinR[x]+=1
                  tinC[y+2]+=1
                  total+=2
              else:
                if grid[x][y-1]==0:
                  grid[x][y-1]=red
                  rinR[x]+=1
                  rinC[y-1]+=1
                  tinR[x]+=1
                  tinC[y-1]+=1
                  total+=2
                if grid[x][y+2]==0:
                  grid[x][y+2]=red
                  rinR[x]+=1
                  rinC[y+2]+=1
                  tinR[x]+=1
                  tinC[y+2]+=1
                  total+=2
      
          if x<s-1:
            if grid[x+1][y]==blue:
              if x==s-2:
                if grid[x-1][y]==0:
                  grid[x-1][y]=red
                  rinR[x-1]+=1
                  rinC[y]+=1
                  tinR[x-1]+=1
                  tinC[y]+=1
                  total+=2
              elif x==0:
                if grid[x+2][y]==0:
                  grid[x+2][y]=red
                  rinR[x+2]+=1
                  rinC[y]+=1
                  tinR[x+2]+=1
                  tinC[y]+=1
                  total+=2
              else:
                if grid[x-1][y]==0:
                  grid[x-1][y]=red
                  rinR[x-1]+=1
                  rinC[y]+=1
                  tinR[x-1]+=1
                  tinC[y]+=1
                  total+=2
                if grid[x+2][y]==0:
                  grid[x+2][y]=red
                  rinR[x+2]+=1
                  rinC[y]+=1
                  tinR[x+2]+=1
                  tinC[y]+=1
                  total+=2

          if y<s-2:
            if grid[x][y+2]==blue:   
              if grid[x][y+1]==0:
                grid[x][y+1]=red
                rinR[x]+=1
                rinC[y+1]+=1
                tinR[x]+=1
                tinC[y+1]+=1
                total+=2

          if x<s-2:
            if grid[x+2][y]==blue:   
              if grid[x+1][y]==0:
                grid[x+1][y]=red
                rinR[x+1]+=1
                rinC[y]+=1
                tinR[x+1]+=1
                tinC[y]+=1
                total+=2

      if tinR[y]!=s:
        if rinR[y]==s//2:
          for c in range(s):
            if grid[y][c]==0:
              grid[y][c]=blue
              binR[y]+=1
              binC[c]+=1
              tinR[y]+=1
              tinC[c]+=1
              total+=2
        if binR[y]==s//2:
          for c in range(s):
            if grid[y][c]==0:
              grid[y][c]=red
              rinR[y]+=1
              rinC[c]+=1
              tinR[y]+=1
              tinC[c]+=1
              total+=2

      if tinC[y]!=s:
        if rinC[y]==s//2:
          for r in range(s):
            if grid[r][y]==0:
              grid[r][y]=blue
              binR[r]+=1
              binC[y]+=1
              tinR[r]+=1
              tinC[y]+=1
              total+=2
        if binC[y]==s//2:
          for r in range(s):
            if grid[r][y]==0:
              grid[r][y]=red
              rinR[r]+=1
              rinC[y]+=1
              tinR[r]+=1
              tinC[y]+=1
              total+=2

      if tinR[x]==s and tinR[y]==(s-2):
        for i in range(s):
          if grid[y][i]!=grid[x][i] and grid[y][i]!=0:
            flag=1
            break
          flag=0
        if flag==0:
          for i in range(s):
            if grid[y][i]==0:
              if grid[x][i]==red:
                grid[y][i]=blue
                binR[y]+=1
                binC[i]+=1
                tinR[y]+=1
                tinC[i]+=1
                total+=2
              else:
                grid[y][i]=red
                rinR[y]+=1
                rinC[i]+=1
                tinR[y]+=1
                tinC[i]+=1
                total+=2

      if tinC[x]==s and tinC[y]==(s-2):
        for i in range(s):
          if grid[i][y]!=grid[i][x] and grid[i][y]!=0:
            flag=1
            break
          flag=0
        if flag==0:
          for i in range(s):
            if grid[i][y]==0:
              if grid[i][x]==red:
                grid[i][y]=blue
                binR[i]+=1
                binC[y]+=1
                tinR[i]+=1
                tinC[y]+=1
                total+=2
              else:
                grid[i][y]=red
                rinR[i]+=1
                rinC[y]+=1
                tinR[i]+=1
                tinC[y]+=1
                total+=2


for i in range(s):
  print(grid[i])

# print(f"\n\n{rinR}\n{rinC}\n\n{binR}\n{binC}\n\n{tinR}\n{tinC}")




