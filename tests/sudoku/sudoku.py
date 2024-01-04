import copy

class Board:
    def __init__(self) -> None:
        self.board = [[{1, 2, 3, 4, 5, 6, 7, 8, 9} 
                       for _ in range(9)] 
                       for _ in range(9)]
    
    def __str__(self) -> str:
        s = ""
        for r in range(9):
            rs = ""
            for c in range(9):
                ps = ""
                for v in self.board[r][c]:
                    ps += str(v)
                while len(ps) < 10: 
                    ps += " "
                rs += ps
            s += rs + "\n\n"
        return s
    
    def result(self, row, col, val):
        nextBoard = copy.deepcopy(self)
        nextBoard.board[row][col] = {val}
        for c1 in range(9):
            if col != c1:
                nextBoard.board[row][c1].discard(val)
        for r1 in range(9):
            if row != r1:
                nextBoard.board[r1][col].discard(val)
        
        gr = row // 3
        gc = col // 3

        for r1 in range(gr * 3, gr * 3 + 3):
            for c1 in range(gc * 3, gc * 3 + 3):
                if row != r1 or col != c1:
                    nextBoard.board[r1][c1].discard(val)

        return nextBoard

def inputBoard():
    board = Board()
    for r in range(9):
        rowstr = input()
        for c in range(9):
            v = int(rowstr[c])
            if v > 0:
                board = board.result(r, c, v)

    return board

def solve(board):
    # for x in range(9):
    #     rowst = set()
    #     colst = set()
    #     for y in range(9):
    #         rowst |= board.board[x][y]
    #         colst |= board.board[y][x]
    #     if len(rowst) != 9: 
    #         return None
    #     if len(colst) != 9: 
    #         return None
                
    for row in range(9):
        for col in range(9):
            if len(board.board[row][col]) == 0:
                print(f"Before None1: \n{board}")
                return None
            if len(board.board[row][col]) > 1:
                for val in board.board[row][col]:
                    board1 = board.result(row, col, val)
                    board1 = solve(board1)
                    if board1:
                        print(f"Before return board1 \n{board1}")
                        return board1
                print(f"Before None: \n{board}")
                return None
    print(f"Before actual return \n{board}")

    for x in range(9):
        rowst = set()
        colst = set()
        for y in range(9):
            rowst |= board.board[x][y]
            colst |= board.board[y][x]
        if len(rowst) != 9: 
            return None
        if len(colst) != 9: 
            return None
        
    return board

def is_valid(board, row, col):
    """
    This is a more hardcoded validator for the sudoku puzzle to make sure that it like actually did solve. This is called post-solving"""
    row_values = list(board.board[row])
    row_set = set()
    for x in row_values:
        row_set |= x
    if len(row_set) != 9:
        return False

    col_values = list()
    for r in range(9):
        col_values.append(board.board[r][col])
    col_set = set()
    for x in col_values:
        col_set |= x
    if len(col_set) != 9:
        return False
    
    subgrid_values = list()
    gr = (row // 3) * 3
    gc = (col // 3) * 3
    for r in range(gr, gr + 3):
        for c in range(gc, gc + 3):
            subgrid_values.append(board.board[r][c])
    if len(subgrid_values) != 9:
        return False

    return True



solved_board = solve(inputBoard())
print(solved_board)
print(is_valid(solved_board, 8, 8))