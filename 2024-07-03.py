def cnt(string, pattern):
    result = 0
    for i in range(len(string)):
        sub = string[i:i + len(pattern)]
        if sub == pattern:
            result += 1
    return result

text = "abdcabcabca"
p1 = "ca"
p2 = "ab"

print(f'ab {cnt(text, p1)} ca {cnt(text, p2)}')