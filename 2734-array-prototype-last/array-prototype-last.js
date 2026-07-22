/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function () {
   if (this.length === 0) return -1;

    let lastElement = -1;

    for (let i = 0; i < this.length; i++) {
        lastElement = this[i];
    }

    return lastElement;
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */