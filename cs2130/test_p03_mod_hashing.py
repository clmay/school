import unittest
from p03_mod_hashing import strip, sentence_sum, mod_hash


class TestP03ModHashing(unittest.TestCase):

    def test_strip(self):

        self.assertEqual(
            strip("Text to strip: 1234567890-=!@#$%^&*()_+"), "Text to strip ")
        self.assertEqual(strip("More: ,./;'[]\\<>?:\"{}|"), "More ")

    def test_sentence_sum(self):
        pass

    def test_mod_hash(self):
        pass


if __name__ == "__main__":
    unittest.main()
