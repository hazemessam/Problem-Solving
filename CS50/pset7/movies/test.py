import termcolor

def testQuery(result_rows, result_columns, queryNum):
    global solutions
    solution_rows = solutions[queryNum][0]
    solution_columns = solutions[queryNum][1]

    if result_rows == solution_rows and result_columns == solution_columns:
        return termcolor.colored(f'[{queryNum}] {result_rows} should equal to {solution_rows} and {result_columns} should equal to {solution_columns} --> Success', 'green')
    else:
        return termcolor.colored(f'[{queryNum}] {result_rows} should equal to {solution_rows} and {result_columns} should equal to {solution_columns} --> Fail', 'red')


solutions = {
    1: (9545, 1),
    2: (1, 1),
    3: (50863, 1),
    4: (1, 1),
    5: (10, 2),
    6: (1, 1),
    7: (6864, 2),
    8: (4, 1),
    9: (18237, 1),
    10: (1887, 1),
    11: (5, 1),
    12: (6, 1),
    13: (176, 1)
}