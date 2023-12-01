adj = {}
visited = [False] * 500

def dfs(u):
    visited[u] = True
    for i in adj[u]:
        if not visited[i]:
            dfs(i)

n, m, x = map(int, input().split())
for i in range(m):
    a, b = map(int, input().split())
    adj.setdefault(a, [])
    adj.setdefault(b, [])
    adj[a].append(b)
    adj[b].append(a)
dfs(x)
f = True
for i in range(1, n + 1):
    if not visited[i]:
        print(i)
        f = False
if f:
    print(0)