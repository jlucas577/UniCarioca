import numpy as np

def AbsoluteError(i1, i2, sqrt):
    a1, a2 = np.array(i1), np.array(i2)
    output = np.sum(
        (a1 - a2) ** 2
    )
    if sqrt:
        output = np.sqrt(
            output
        )
    return output


def RelativeError(i1, i2):
    a1 = np.array(i1)
    a2 = AbsoluteError(i1, i2, False)
    output = np.sum(
        a1 ** 2
    )
    return np.sqrt(
        a2 / output
    )


x1 = [1, 3, 5, -6, 6]
x2 = [2, -4, 6, 8, -7]

print('Vetores: \n')
print(f'x1: {x1} - x2 {x2} \n')
print(f'Erro absoluto: {AbsoluteError(x1, x2, True)}')
print(f'Erro relativo: {RelativeError(x1, x2)}')
