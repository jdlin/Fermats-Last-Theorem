Fermat's Last Theorem: x^n + y^n = z^n

The input of n is 2, and the range of variable z is from 150 to 200. The results are shown below: 
----------------
Please input n, and the range of z.
2 150 200
The solutions of x^2 + y^2 = z^2 between 150 and 200 are
001: 42^2 + 144^2 = 150^2
002: 90^2 + 120^2 = 150^2
003: 72^2 + 135^2 = 153^2
004: 93^2 + 124^2 = 155^2
005: 60^2 + 144^2 = 156^2
006: 85^2 + 132^2 = 157^2
007: 84^2 + 135^2 = 159^2
008: 96^2 + 128^2 = 160^2
009: 36^2 + 160^2 = 164^2
010: 99^2 + 132^2 = 165^2
011: 65^2 + 156^2 = 169^2
012: 119^2 + 120^2 = 169^2
013: 26^2 + 168^2 = 170^2
014: 72^2 + 154^2 = 170^2
015: 80^2 + 150^2 = 170^2
016: 102^2 + 136^2 = 170^2
017: 52^2 + 165^2 = 173^2
018: 120^2 + 126^2 = 174^2
019: 49^2 + 168^2 = 175^2
020: 105^2 + 140^2 = 175^2
021: 78^2 + 160^2 = 178^2
022: 108^2 + 144^2 = 180^2
023: 19^2 + 180^2 = 181^2
024: 70^2 + 168^2 = 182^2
025: 33^2 + 180^2 = 183^2
026: 57^2 + 176^2 = 185^2
027: 60^2 + 175^2 = 185^2
028: 104^2 + 153^2 = 185^2
029: 111^2 + 148^2 = 185^2
030: 88^2 + 165^2 = 187^2
031: 114^2 + 152^2 = 190^2
032: 95^2 + 168^2 = 193^2
033: 130^2 + 144^2 = 194^2
034: 48^2 + 189^2 = 195^2
035: 75^2 + 180^2 = 195^2
036: 99^2 + 168^2 = 195^2
037: 117^2 + 156^2 = 195^2
038: 28^2 + 195^2 = 197^2
039: 56^2 + 192^2 = 200^2
040: 120^2 + 160^2 = 200^2

----------------

	The algorithm is very simple. First, we pick up a number for the variable z. Then we try the sum of x^n and y^n for each value from 1 to z - 1 sequentially. If the sum is equal to z^n, we get the solution. Otherwise, we try the next value of the variable z, if the sum is greater then z^n. The time complexity of this algorithm is O(m^3), where m is the maximum value of variable z.
  
	When n = 3, we cannot find any solution between 1 and 1625. The maximum value of z is limited to 1625, because the bits of a long integer variable is 32 bits.
