


def to_jaden_case(string):
    rests = ""
    if string is not None and string.strip():
        text = string.split()
        for result in text:
            jon = ' '.join(text)
            res = jon.capitalize()
            print(res)
            rests += res + " "
        return rests.rstrip()
    else:
        raise ValueError('NoText!')





print(to_jaden_case('How can mirrors be real if our eyes aren\'t real'))

