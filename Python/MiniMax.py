# Method for implement the Minimax Algorithm
def getBestMove(state, player, alpha, beta, block_choice):
    # TODO: call the check_current_state method using state parameter
    check_current_state(state)
    winner_loser = None
    done = None
    # else if winner_loser is 'X' then You won else game is draw
    if done == "Done" and winner_loser == 'O':
        return 1
    elif done == "Done" and winner_loser == 'X':
        return -1
    elif done == "Draw":
        return 0

    # TODO: set moves to empty list
    moves = []
    # TODO: set empty_cells to empty list
    empty_cells = []

    # Append the block_num to the empty_cells list
    for i in range(3):
        for j in range(3):
            if state[i][j] == ' ':
                empty_cells.append(i*3 + (j+1))

    # TODO:Iterate over all the empty_cells
    for empty_cell in empty_cells:
        # TODO: create the empty dictionary
        move = {}

        # TODO: Assign the empty_cell to move['index']
        move['index'] = empty_cell

        # Call the copy_game_state method
        new_state = copy_game_state(state)

        # TODO: Call the play_move method with new_state,player,empty_cell
        play_move(new_state, player, empty_cell)

        # if player is computer
        if player == 'O':
            # TODO: Call getBestMove method with new_state and human player ('X') to make more depth tree for human
            result = getBestMove(new_state, 'X', alpha, beta, block_choice)
            move['score'] = result
        else:
            # TODO: Call getBestMove method with new_state and computer player('O') to make more depth tree for computer
            result = getBestMove(new_state, 'O', alpha, beta, block_choice)
            move['score'] = result

        moves.append(move)

    # Find best move
    best_move = None
    # Check if player is computer('O')
    if player == "O":
        best = -infinity
        for move in moves:
            if move['score'] is None or move['score'] > best:
                best = move['score']
                best_move = move['index']
                alpha = max(best_move, alpha)
                if alpha >= beta:
                    break
    else:
        best = infinity
        for move in moves:
            if move['score'] is None or move['score'] < best:
                best = move['score']
                best_move = move['index']
                beta = max(best_move, beta)
                if alpha >= beta:
                    break
    return best_move
