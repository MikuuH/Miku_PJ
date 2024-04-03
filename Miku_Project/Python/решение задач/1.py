def to_camel_case(text):
    result = ''
    find = '-' in text
    fidn = '_' in text
    if find:
        res = text.replace("_", '-')
        words = res.split('-')
    elif fidn:
        res = text.replace("-", '_')
        words = res.split('_')
    else:
        return text
    if text:
        for word in words[1:]:
            result += word.capitalize()
        return words[0] + result
    
