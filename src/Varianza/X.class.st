Class {
	#name : #X,
	#superclass : #Object,
	#category : #Varianza
}

{ #category : #abstract }
X >> foo: obj [
	obj goo.
	Transcript show: 'FooOO en clase X';cr.
	^ ClaseA new.
]
