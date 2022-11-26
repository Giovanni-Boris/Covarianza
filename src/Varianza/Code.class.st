Class {
	#name : #Code,
	#superclass : #Object,
	#category : #Varianza
}

{ #category : #'as yet unclassified' }
Code >> true [
	|a|
	Transcript show: 'Prueba normal';cr.
	a := Y  new.
	a foo: ClaseB new.

	Transcript show: 'covarainza en lo que recibe';cr.
	a := Y1  new.
	a foo: ClaseA new.

	Transcript show: 'contravarianza en lo que recibe';cr.
	a := Y2  new.
	a foo: ClaseC new.

	Transcript show: 'covarianza C en lo que que devuelve';cr.
	a := Y3  new.	
	a foo: ClaseB new.
	Transcript show: 'contravarianza C en lo que que devuelve';cr.
	a := Y4  new.
	a foo: ClaseB new.
]
