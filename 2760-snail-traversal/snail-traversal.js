/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
  //declaring 2d array
         if(rowsCount*colsCount !== this.length) return [];
        const res  = new Array(rowsCount).fill(0).map(() => new Array(colsCount).fill(0))
       
        let isReversed = false

    for(let i = 0; i < this.length; i++) {
        const row = !isReversed ? i % rowsCount :  rowsCount - 1 - (i % rowsCount)
        const col = Math.floor(i / rowsCount)

        res[row][col] = this[i]
        
        if((i % rowsCount) === rowsCount - 1) {
            isReversed = !isReversed
        }
    }
    return res;

}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */