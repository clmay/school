import unittest
from assignment_03_mod_hashing import clean, sum_chars, mod_hash


class TestAssignment03ModHashing(unittest.TestCase):

    def test_clean(self):
        self.assertEqual(clean("This is a sentence"), "this is a sentence")
        self.assertEqual(clean("abcdefghijklmnopqrstuvwxyz"),
                         "abcdefghijklmnopqrstuvwxyz")
        self.assertEqual(clean("ABCDEFGHIJKLMNOPQRSTUVWXYZ"),
                         "abcdefghijklmnopqrstuvwxyz")
        self.assertEqual(
            clean("1234567890-=!@#$%^&*()_+,./;'[]\\<>?:\"{}|"), "")
        self.assertEqual(clean("   "), "   ")

    def test_char_sum(self):
        self.assertEqual(sum_chars("A"), 1)
        self.assertEqual(sum_chars("a"), 1)
        self.assertEqual(sum_chars("Z"), 26)
        self.assertEqual(sum_chars("z"), 26)
        self.assertEqual(sum_chars("ABC"), 6)
        self.assertEqual(sum_chars("abc"), 6)
        self.assertEqual(sum_chars(" "), 31)
        self.assertEqual(sum_chars("  "), 62)
        self.assertEqual(sum_chars("   "), 93)
        self.assertEqual(sum_chars(" ABC"), 37)
        self.assertEqual(
            sum_chars("1234567890-=!@#$%^&*()_+,./;'[]\\<>?:\"{}|"), 0)

    def test_mod_hash(self):
        self.assertEqual(mod_hash(31), 0)
        self.assertEqual(mod_hash(62), 0)
        self.assertEqual(mod_hash(93), 0)
        self.assertEqual(mod_hash(1), 1)
        self.assertEqual(mod_hash(32), 1)
        self.assertEqual(mod_hash(63), 1)
        self.assertEqual(mod_hash(-1), 30)


if __name__ == "__main__":
    unittest.main()
