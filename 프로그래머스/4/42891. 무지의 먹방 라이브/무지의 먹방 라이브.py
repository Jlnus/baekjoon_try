import heapq

def solution(food_times, k):
    num = len(food_times)

    if num > k:  # 시간이 더 적음
        return k+1
    if sum(food_times) < k+1:  # 시간이 남음
        return -1
         
    # 가장 적게 남은 음식을 찾기 위해 힙큐로 정렬, 기존 순서도 저장
    h = []
    for i in range(num):
        heapq.heappush(h, (food_times[i],i+1))
        
    prev = 0
    while 1:
        t = (h[0][0] - prev) * num  # 하나 없앨 때까지 소요 시간
        if k >= t:
            k -= t  
            prev,_ = heapq.heappop(h)
            num -= 1
        else:
            i = k % num  # 남은 음식 중 찾을 인덱스
            h.sort(key=lambda x:x[1])
            answer = h[i][1]    
            break
    
    return answer