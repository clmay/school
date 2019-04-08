import java.util.ArrayList;
import java.util.Random;

class BingoCard {
    private int[][] card = new int[5][5];
    private Random generator = new Random();

    public BingoCard() {
        ArrayList<Integer> rndNum = new ArrayList<>();
        int start = 1;
        for (int r = 0; r < card.length; r++) {
            populateArrayList(rndNum, start);
            for (int c = 0; c < card[0].length; c++) {
                int pos = generator.nextInt(rndNum.size());
                card[r][c] = rndNum.get(pos);
                rndNum.remove(pos);
            }
            start += 15;
        }
        card[2][2] = 0;
    }

    public void populateArrayList(ArrayList lst, int start) {
        lst.clear();
        for (int i = start; i < start + 15; i++) {
            lst.add(i);
        }
    }

    public boolean isWin() {
        int sumAcross = 0;
        int sumDown = 0;
        int diagRight = 0;
        int diagLeft = 0;

        for (int r = 0; r < card.length; r++) {
            for (int c = 0; c < card[0].length; c++) {
                sumAcross += card[r][c];
                sumDown += card[c][r];
            }
            if (sumAcross == 0 || sumDown == 0) {
                return true;
            }
            diagRight += card[r][r];
            diagLeft += card[r][4 - r];
        }
        if (diagRight == 0 || diagLeft == 0) {
            return true;
        }
        return false;
    }

    public void move(int num) {
        for (int r = 0; r < card.length; r++) {
            for (int c = 0; c < card[0].length; c++) {
                if (card[r][c] == num) {
                    card[r][c] = 0;
                }
            }
        }
    }

    public String toString() {
        String str = "";
        String header = "BINGO";
        for (int i = 0; i < header.length(); i++) {
            str += header.charAt(i) + '\t';
        }
        str += '\n';
        for (int r = 0; r < card.length; r++) {
            for (int c = 0; c < card[0].length; c++) {
                if (card[r][c] == 0) {
                    str += "X\t";
                } else {
                    str += card[r][c] + "\t";
                }
            }
            str += "\n";
        }
        return str;
    }
}