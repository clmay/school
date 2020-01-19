import unittest
from assignment_01_sets import set_union, set_intersection, set_complement


class TestAssignment01Sets(unittest.TestCase):

    def test_set_union(self):

        # test union
        self.assertEqual(set_union({1, 2}, {2, 3}), {1, 2, 3})
        self.assertEqual(set_union({1, 2, 3}, {3}), {1, 2, 3})
        self.assertNotEqual(
            set_union({1, 2}, {2, 3}), set_union({1, 2}, {3, 4}))

        # test commutativity of union
        self.assertEqual(set_union({1, 2}, {2, 3}), set_union({2, 3}, {1, 2}))

        # test union of empty sets is empty set
        self.assertEqual(set(), set_union(set(), set()))

        # test that the empty set is identity element for union
        self.assertEqual(set_union(set(), {1, 2, 3}), {1, 2, 3})

    def test_set_intersection(self):
        pass


if __name__ == '__main__':
    unittest.main()
