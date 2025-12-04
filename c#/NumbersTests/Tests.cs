using Numbers;

namespace NumbersTest
{
    [TestClass]
    public sealed class MultiplicationTest
    {
        [TestMethod]
        public void MultiplicationT()
        {
            Operations num = new Operations(5, 6);

            Assert.AreEqual(30, num.MultiplicationByAddition());
        }

        [TestMethod]
        public void MultiplicationF()
        {
            Operations num = new Operations(-5, 4);

            Assert.AreEqual(-20, num.MultiplicationByAddition());
        }
    }

    [TestClass]
    public sealed class ModuloTests
    {
        [TestMethod]
        public void ModuloT()
        {
            Operations num = new Operations(21, 4);

            Assert.AreEqual(1, num.ModuloBySubstraction());
        }

        [TestMethod]
        public void ModuloF()
        {
            Operations num = new Operations(20, 4);

            Assert.AreEqual(0, num.ModuloBySubstraction());
        }
    }
}
