.PHONY: run
run:
	poetry run python fizzbuzz.py

.PHONY: test
test:
	@echo "🦕[test] run flake8"
	poetry run flake8 --ignore=F541
	@echo "🦕[test] run mypy"
	poetry run mypy *.py
	@echo "🦕[test] run pytest"
	poetry run pytest -v

.PHONY: install
install:
	pip install poetry==1.1.4
	poetry install

.PHONY: docker
docker:
	docker-compose build --no-cache
	docker-compose up

