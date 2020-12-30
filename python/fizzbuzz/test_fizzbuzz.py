from fizzbuzz import isFizz, isBuzz


def testFunction():
    print('test successed')


def test_isFizz():
    assert (isFizz(3))
    assert not (isFizz(1))
    assert (isFizz(15))


def test_isBuzz():
    assert (isBuzz(5))
    assert not (isBuzz(3))
    assert (isBuzz(15))
