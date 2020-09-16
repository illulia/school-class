a = []
for n in range (1,3):
    b = int(input("%d번째 정수를 입력하세요: " %n))
    a.append(b)
print(a[0]," 과 ",a[1]," 의 합은 ",(a[0]+a[1])," 입니다.")