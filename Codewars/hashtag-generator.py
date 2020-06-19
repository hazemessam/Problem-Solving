def generate_hashtag(s):
    if len(s) > 139 or len(s) == 0:
        return False
    hashtag = '#'
    words = s.strip().split(' ')
    for word in words:
        hashtag += word.capitalize()
    return hashtag
