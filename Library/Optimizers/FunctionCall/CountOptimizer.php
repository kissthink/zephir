<?php

/**
 * CountOptimizer
 *
 * Optimizes calls to 'count' using internal function
 */
class CountOptimizer
{
	/**
	 *
	 * @param array $expression
	 * @param Call $call
	 * @param CompilationContext $context
	 */
	public function optimize(array $expression, Call $call, CompilationContext $context)
	{
		if (!isset($expression['parameters'])) {
			return false;
		}

		if (count($expression['parameters']) != 1) {
			return false;
		}

		$resolvedParams = $call->getReadOnlyResolvedParams($expression['parameters'], $context, $expression);
		return new CompiledExpression('int', 'zephir_fast_count_int(' . $resolvedParams[0] . ' TSRMLS_CC)', $expression);
	}
}