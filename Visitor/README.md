# Visitor

不常用，因为通常我们定义接口是一个动作，描述做什么事。
而Visitor要在原来的类中增加统一的accept方法，接收一个动作的对象，然后执行对象的visit方法。
Visitor模式是把这个动作作为了参数。难以理解，有点反人类。但是它的优点是，可以扩展，可以增加新的动作，而不需要修改原来的类。


